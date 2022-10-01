// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategroupcertificateauthorityresponse.h"
#include "creategroupcertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateGroupCertificateAuthorityResponse
 * \brief The CreateGroupCertificateAuthorityResponse class provides an interace for Greengrass CreateGroupCertificateAuthority responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createGroupCertificateAuthority
 */

/*!
 * Constructs a CreateGroupCertificateAuthorityResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGroupCertificateAuthorityResponse::CreateGroupCertificateAuthorityResponse(
        const CreateGroupCertificateAuthorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateGroupCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new CreateGroupCertificateAuthorityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGroupCertificateAuthorityRequest * CreateGroupCertificateAuthorityResponse::request() const
{
    Q_D(const CreateGroupCertificateAuthorityResponse);
    return static_cast<const CreateGroupCertificateAuthorityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateGroupCertificateAuthority \a response.
 */
void CreateGroupCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGroupCertificateAuthorityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateGroupCertificateAuthorityResponsePrivate
 * \brief The CreateGroupCertificateAuthorityResponsePrivate class provides private implementation for CreateGroupCertificateAuthorityResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateGroupCertificateAuthorityResponsePrivate object with public implementation \a q.
 */
CreateGroupCertificateAuthorityResponsePrivate::CreateGroupCertificateAuthorityResponsePrivate(
    CreateGroupCertificateAuthorityResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateGroupCertificateAuthority response element from \a xml.
 */
void CreateGroupCertificateAuthorityResponsePrivate::parseCreateGroupCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGroupCertificateAuthorityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
