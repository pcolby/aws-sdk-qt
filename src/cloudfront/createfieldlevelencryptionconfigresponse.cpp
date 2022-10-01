// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfieldlevelencryptionconfigresponse.h"
#include "createfieldlevelencryptionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateFieldLevelEncryptionConfigResponse
 * \brief The CreateFieldLevelEncryptionConfigResponse class provides an interace for CloudFront CreateFieldLevelEncryptionConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createFieldLevelEncryptionConfig
 */

/*!
 * Constructs a CreateFieldLevelEncryptionConfigResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFieldLevelEncryptionConfigResponse::CreateFieldLevelEncryptionConfigResponse(
        const CreateFieldLevelEncryptionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateFieldLevelEncryptionConfigResponsePrivate(this), parent)
{
    setRequest(new CreateFieldLevelEncryptionConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFieldLevelEncryptionConfigRequest * CreateFieldLevelEncryptionConfigResponse::request() const
{
    Q_D(const CreateFieldLevelEncryptionConfigResponse);
    return static_cast<const CreateFieldLevelEncryptionConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateFieldLevelEncryptionConfig \a response.
 */
void CreateFieldLevelEncryptionConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFieldLevelEncryptionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateFieldLevelEncryptionConfigResponsePrivate
 * \brief The CreateFieldLevelEncryptionConfigResponsePrivate class provides private implementation for CreateFieldLevelEncryptionConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateFieldLevelEncryptionConfigResponsePrivate object with public implementation \a q.
 */
CreateFieldLevelEncryptionConfigResponsePrivate::CreateFieldLevelEncryptionConfigResponsePrivate(
    CreateFieldLevelEncryptionConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateFieldLevelEncryptionConfig response element from \a xml.
 */
void CreateFieldLevelEncryptionConfigResponsePrivate::parseCreateFieldLevelEncryptionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFieldLevelEncryptionConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
