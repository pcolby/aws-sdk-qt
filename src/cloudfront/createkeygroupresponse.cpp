// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createkeygroupresponse.h"
#include "createkeygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateKeyGroupResponse
 * \brief The CreateKeyGroupResponse class provides an interace for CloudFront CreateKeyGroup responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createKeyGroup
 */

/*!
 * Constructs a CreateKeyGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateKeyGroupResponse::CreateKeyGroupResponse(
        const CreateKeyGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateKeyGroupResponsePrivate(this), parent)
{
    setRequest(new CreateKeyGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateKeyGroupRequest * CreateKeyGroupResponse::request() const
{
    Q_D(const CreateKeyGroupResponse);
    return static_cast<const CreateKeyGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateKeyGroup \a response.
 */
void CreateKeyGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateKeyGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateKeyGroupResponsePrivate
 * \brief The CreateKeyGroupResponsePrivate class provides private implementation for CreateKeyGroupResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateKeyGroupResponsePrivate object with public implementation \a q.
 */
CreateKeyGroupResponsePrivate::CreateKeyGroupResponsePrivate(
    CreateKeyGroupResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateKeyGroup response element from \a xml.
 */
void CreateKeyGroupResponsePrivate::parseCreateKeyGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateKeyGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
