// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconfigurationsetresponse.h"
#include "deleteconfigurationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteConfigurationSetResponse
 * \brief The DeleteConfigurationSetResponse class provides an interace for Ses DeleteConfigurationSet responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::deleteConfigurationSet
 */

/*!
 * Constructs a DeleteConfigurationSetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConfigurationSetResponse::DeleteConfigurationSetResponse(
        const DeleteConfigurationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new DeleteConfigurationSetResponsePrivate(this), parent)
{
    setRequest(new DeleteConfigurationSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConfigurationSetRequest * DeleteConfigurationSetResponse::request() const
{
    Q_D(const DeleteConfigurationSetResponse);
    return static_cast<const DeleteConfigurationSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses DeleteConfigurationSet \a response.
 */
void DeleteConfigurationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConfigurationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::DeleteConfigurationSetResponsePrivate
 * \brief The DeleteConfigurationSetResponsePrivate class provides private implementation for DeleteConfigurationSetResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteConfigurationSetResponsePrivate object with public implementation \a q.
 */
DeleteConfigurationSetResponsePrivate::DeleteConfigurationSetResponsePrivate(
    DeleteConfigurationSetResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses DeleteConfigurationSet response element from \a xml.
 */
void DeleteConfigurationSetResponsePrivate::parseDeleteConfigurationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigurationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
