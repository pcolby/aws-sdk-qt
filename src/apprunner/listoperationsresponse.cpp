// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listoperationsresponse.h"
#include "listoperationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppRunner {

/*!
 * \class QtAws::AppRunner::ListOperationsResponse
 * \brief The ListOperationsResponse class provides an interace for AppRunner ListOperations responses.
 *
 * \inmodule QtAwsAppRunner
 *
 *  <fullname>App Runner</fullname>
 * 
 *  App Runner is an application service that provides a fast, simple, and cost-effective way to go directly from an
 *  existing container image or source code to a running service in the Amazon Web Services Cloud in seconds. You don't need
 *  to learn new technologies, decide which compute service to use, or understand how to provision and configure Amazon Web
 *  Services
 * 
 *  resources>
 * 
 *  App Runner connects directly to your container registry or source code repository. It provides an automatic delivery
 *  pipeline with fully managed operations, high performance, scalability, and
 * 
 *  security>
 * 
 *  For more information about App Runner, see the <a href="https://docs.aws.amazon.com/apprunner/latest/dg/">App Runner
 *  Developer Guide</a>. For release information, see the <a
 *  href="https://docs.aws.amazon.com/apprunner/latest/relnotes/">App Runner Release
 * 
 *  Notes</a>>
 * 
 *  To install the Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line
 *  tools that you can use to access the API, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  For a list of Region-specific endpoints that App Runner supports, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/apprunner.html">App Runner endpoints and quotas</a> in the <i>Amazon
 *  Web Services General
 *
 * \sa AppRunnerClient::listOperations
 */

/*!
 * Constructs a ListOperationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListOperationsResponse::ListOperationsResponse(
        const ListOperationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppRunnerResponse(new ListOperationsResponsePrivate(this), parent)
{
    setRequest(new ListOperationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOperationsRequest * ListOperationsResponse::request() const
{
    Q_D(const ListOperationsResponse);
    return static_cast<const ListOperationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppRunner ListOperations \a response.
 */
void ListOperationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOperationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppRunner::ListOperationsResponsePrivate
 * \brief The ListOperationsResponsePrivate class provides private implementation for ListOperationsResponse.
 * \internal
 *
 * \inmodule QtAwsAppRunner
 */

/*!
 * Constructs a ListOperationsResponsePrivate object with public implementation \a q.
 */
ListOperationsResponsePrivate::ListOperationsResponsePrivate(
    ListOperationsResponse * const q) : AppRunnerResponsePrivate(q)
{

}

/*!
 * Parses a AppRunner ListOperations response element from \a xml.
 */
void ListOperationsResponsePrivate::parseListOperationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOperationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppRunner
} // namespace QtAws
