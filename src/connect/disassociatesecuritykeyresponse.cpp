// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatesecuritykeyresponse.h"
#include "disassociatesecuritykeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DisassociateSecurityKeyResponse
 * \brief The DisassociateSecurityKeyResponse class provides an interace for Connect DisassociateSecurityKey responses.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::disassociateSecurityKey
 */

/*!
 * Constructs a DisassociateSecurityKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateSecurityKeyResponse::DisassociateSecurityKeyResponse(
        const DisassociateSecurityKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new DisassociateSecurityKeyResponsePrivate(this), parent)
{
    setRequest(new DisassociateSecurityKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateSecurityKeyRequest * DisassociateSecurityKeyResponse::request() const
{
    Q_D(const DisassociateSecurityKeyResponse);
    return static_cast<const DisassociateSecurityKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect DisassociateSecurityKey \a response.
 */
void DisassociateSecurityKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateSecurityKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::DisassociateSecurityKeyResponsePrivate
 * \brief The DisassociateSecurityKeyResponsePrivate class provides private implementation for DisassociateSecurityKeyResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DisassociateSecurityKeyResponsePrivate object with public implementation \a q.
 */
DisassociateSecurityKeyResponsePrivate::DisassociateSecurityKeyResponsePrivate(
    DisassociateSecurityKeyResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect DisassociateSecurityKey response element from \a xml.
 */
void DisassociateSecurityKeyResponsePrivate::parseDisassociateSecurityKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateSecurityKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
