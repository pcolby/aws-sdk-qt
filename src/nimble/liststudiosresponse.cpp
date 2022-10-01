// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststudiosresponse.h"
#include "liststudiosresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListStudiosResponse
 * \brief The ListStudiosResponse class provides an interace for Nimble ListStudios responses.
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
 * \sa NimbleClient::listStudios
 */

/*!
 * Constructs a ListStudiosResponse object for \a reply to \a request, with parent \a parent.
 */
ListStudiosResponse::ListStudiosResponse(
        const ListStudiosRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new ListStudiosResponsePrivate(this), parent)
{
    setRequest(new ListStudiosRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStudiosRequest * ListStudiosResponse::request() const
{
    Q_D(const ListStudiosResponse);
    return static_cast<const ListStudiosRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble ListStudios \a response.
 */
void ListStudiosResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStudiosResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::ListStudiosResponsePrivate
 * \brief The ListStudiosResponsePrivate class provides private implementation for ListStudiosResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListStudiosResponsePrivate object with public implementation \a q.
 */
ListStudiosResponsePrivate::ListStudiosResponsePrivate(
    ListStudiosResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble ListStudios response element from \a xml.
 */
void ListStudiosResponsePrivate::parseListStudiosResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStudiosResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
