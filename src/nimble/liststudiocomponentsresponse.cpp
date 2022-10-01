// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststudiocomponentsresponse.h"
#include "liststudiocomponentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListStudioComponentsResponse
 * \brief The ListStudioComponentsResponse class provides an interace for Nimble ListStudioComponents responses.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::listStudioComponents
 */

/*!
 * Constructs a ListStudioComponentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStudioComponentsResponse::ListStudioComponentsResponse(
        const ListStudioComponentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new ListStudioComponentsResponsePrivate(this), parent)
{
    setRequest(new ListStudioComponentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStudioComponentsRequest * ListStudioComponentsResponse::request() const
{
    Q_D(const ListStudioComponentsResponse);
    return static_cast<const ListStudioComponentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble ListStudioComponents \a response.
 */
void ListStudioComponentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStudioComponentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::ListStudioComponentsResponsePrivate
 * \brief The ListStudioComponentsResponsePrivate class provides private implementation for ListStudioComponentsResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListStudioComponentsResponsePrivate object with public implementation \a q.
 */
ListStudioComponentsResponsePrivate::ListStudioComponentsResponsePrivate(
    ListStudioComponentsResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble ListStudioComponents response element from \a xml.
 */
void ListStudioComponentsResponsePrivate::parseListStudioComponentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStudioComponentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
