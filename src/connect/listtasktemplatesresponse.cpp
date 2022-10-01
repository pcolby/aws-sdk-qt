// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtasktemplatesresponse.h"
#include "listtasktemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::ListTaskTemplatesResponse
 * \brief The ListTaskTemplatesResponse class provides an interace for Connect ListTaskTemplates responses.
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
 * \sa ConnectClient::listTaskTemplates
 */

/*!
 * Constructs a ListTaskTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTaskTemplatesResponse::ListTaskTemplatesResponse(
        const ListTaskTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new ListTaskTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListTaskTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTaskTemplatesRequest * ListTaskTemplatesResponse::request() const
{
    Q_D(const ListTaskTemplatesResponse);
    return static_cast<const ListTaskTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect ListTaskTemplates \a response.
 */
void ListTaskTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTaskTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::ListTaskTemplatesResponsePrivate
 * \brief The ListTaskTemplatesResponsePrivate class provides private implementation for ListTaskTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a ListTaskTemplatesResponsePrivate object with public implementation \a q.
 */
ListTaskTemplatesResponsePrivate::ListTaskTemplatesResponsePrivate(
    ListTaskTemplatesResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect ListTaskTemplates response element from \a xml.
 */
void ListTaskTemplatesResponsePrivate::parseListTaskTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTaskTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
