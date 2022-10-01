// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestudiocomponentresponse.h"
#include "deletestudiocomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::DeleteStudioComponentResponse
 * \brief The DeleteStudioComponentResponse class provides an interace for Nimble DeleteStudioComponent responses.
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
 * \sa NimbleClient::deleteStudioComponent
 */

/*!
 * Constructs a DeleteStudioComponentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStudioComponentResponse::DeleteStudioComponentResponse(
        const DeleteStudioComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new DeleteStudioComponentResponsePrivate(this), parent)
{
    setRequest(new DeleteStudioComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStudioComponentRequest * DeleteStudioComponentResponse::request() const
{
    Q_D(const DeleteStudioComponentResponse);
    return static_cast<const DeleteStudioComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble DeleteStudioComponent \a response.
 */
void DeleteStudioComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStudioComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::DeleteStudioComponentResponsePrivate
 * \brief The DeleteStudioComponentResponsePrivate class provides private implementation for DeleteStudioComponentResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a DeleteStudioComponentResponsePrivate object with public implementation \a q.
 */
DeleteStudioComponentResponsePrivate::DeleteStudioComponentResponsePrivate(
    DeleteStudioComponentResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble DeleteStudioComponent response element from \a xml.
 */
void DeleteStudioComponentResponsePrivate::parseDeleteStudioComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStudioComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
