// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconfigurationsetresponse.h"
#include "deleteconfigurationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::DeleteConfigurationSetResponse
 * \brief The DeleteConfigurationSetResponse class provides an interace for SESv2 DeleteConfigurationSet responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::deleteConfigurationSet
 */

/*!
 * Constructs a DeleteConfigurationSetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConfigurationSetResponse::DeleteConfigurationSetResponse(
        const DeleteConfigurationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new DeleteConfigurationSetResponsePrivate(this), parent)
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
 * Parses a successful SESv2 DeleteConfigurationSet \a response.
 */
void DeleteConfigurationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConfigurationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::DeleteConfigurationSetResponsePrivate
 * \brief The DeleteConfigurationSetResponsePrivate class provides private implementation for DeleteConfigurationSetResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a DeleteConfigurationSetResponsePrivate object with public implementation \a q.
 */
DeleteConfigurationSetResponsePrivate::DeleteConfigurationSetResponsePrivate(
    DeleteConfigurationSetResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 DeleteConfigurationSet response element from \a xml.
 */
void DeleteConfigurationSetResponsePrivate::parseDeleteConfigurationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigurationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
