// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletequickconnectresponse.h"
#include "deletequickconnectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DeleteQuickConnectResponse
 * \brief The DeleteQuickConnectResponse class provides an interace for Connect DeleteQuickConnect responses.
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
 * \sa ConnectClient::deleteQuickConnect
 */

/*!
 * Constructs a DeleteQuickConnectResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteQuickConnectResponse::DeleteQuickConnectResponse(
        const DeleteQuickConnectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new DeleteQuickConnectResponsePrivate(this), parent)
{
    setRequest(new DeleteQuickConnectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteQuickConnectRequest * DeleteQuickConnectResponse::request() const
{
    Q_D(const DeleteQuickConnectResponse);
    return static_cast<const DeleteQuickConnectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect DeleteQuickConnect \a response.
 */
void DeleteQuickConnectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteQuickConnectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::DeleteQuickConnectResponsePrivate
 * \brief The DeleteQuickConnectResponsePrivate class provides private implementation for DeleteQuickConnectResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DeleteQuickConnectResponsePrivate object with public implementation \a q.
 */
DeleteQuickConnectResponsePrivate::DeleteQuickConnectResponsePrivate(
    DeleteQuickConnectResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect DeleteQuickConnect response element from \a xml.
 */
void DeleteQuickConnectResponsePrivate::parseDeleteQuickConnectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteQuickConnectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
