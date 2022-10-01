// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsourcelocationresponse.h"
#include "createsourcelocationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::CreateSourceLocationResponse
 * \brief The CreateSourceLocationResponse class provides an interace for MediaTailor CreateSourceLocation responses.
 *
 * \inmodule QtAwsMediaTailor
 *
 *  Use the AWS Elemental MediaTailor SDKs and CLI to configure scalable ad insertion and linear channels. With MediaTailor,
 *  you can assemble existing content into a linear stream and serve targeted ads to viewers while maintaining broadcast
 *  quality in over-the-top (OTT) video applications. For information about using the service, including detailed
 *  information about the settings covered in this guide, see the <a
 *  href="https://docs.aws.amazon.com/mediatailor/latest/ug/">AWS Elemental MediaTailor User
 * 
 *  Guide</a>>
 * 
 *  Through the SDKs and the CLI you manage AWS Elemental MediaTailor configurations and channels the same as you do through
 *  the console. For example, you specify ad insertion behavior and mapping information for the origin server and the ad
 *  decision server
 *
 * \sa MediaTailorClient::createSourceLocation
 */

/*!
 * Constructs a CreateSourceLocationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSourceLocationResponse::CreateSourceLocationResponse(
        const CreateSourceLocationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new CreateSourceLocationResponsePrivate(this), parent)
{
    setRequest(new CreateSourceLocationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSourceLocationRequest * CreateSourceLocationResponse::request() const
{
    Q_D(const CreateSourceLocationResponse);
    return static_cast<const CreateSourceLocationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor CreateSourceLocation \a response.
 */
void CreateSourceLocationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSourceLocationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::CreateSourceLocationResponsePrivate
 * \brief The CreateSourceLocationResponsePrivate class provides private implementation for CreateSourceLocationResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a CreateSourceLocationResponsePrivate object with public implementation \a q.
 */
CreateSourceLocationResponsePrivate::CreateSourceLocationResponsePrivate(
    CreateSourceLocationResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor CreateSourceLocation response element from \a xml.
 */
void CreateSourceLocationResponsePrivate::parseCreateSourceLocationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSourceLocationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
