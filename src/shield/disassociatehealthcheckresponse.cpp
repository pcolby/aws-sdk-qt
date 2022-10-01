// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatehealthcheckresponse.h"
#include "disassociatehealthcheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DisassociateHealthCheckResponse
 * \brief The DisassociateHealthCheckResponse class provides an interace for Shield DisassociateHealthCheck responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::disassociateHealthCheck
 */

/*!
 * Constructs a DisassociateHealthCheckResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateHealthCheckResponse::DisassociateHealthCheckResponse(
        const DisassociateHealthCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DisassociateHealthCheckResponsePrivate(this), parent)
{
    setRequest(new DisassociateHealthCheckRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateHealthCheckRequest * DisassociateHealthCheckResponse::request() const
{
    Q_D(const DisassociateHealthCheckResponse);
    return static_cast<const DisassociateHealthCheckRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield DisassociateHealthCheck \a response.
 */
void DisassociateHealthCheckResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateHealthCheckResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DisassociateHealthCheckResponsePrivate
 * \brief The DisassociateHealthCheckResponsePrivate class provides private implementation for DisassociateHealthCheckResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DisassociateHealthCheckResponsePrivate object with public implementation \a q.
 */
DisassociateHealthCheckResponsePrivate::DisassociateHealthCheckResponsePrivate(
    DisassociateHealthCheckResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DisassociateHealthCheck response element from \a xml.
 */
void DisassociateHealthCheckResponsePrivate::parseDisassociateHealthCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateHealthCheckResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
