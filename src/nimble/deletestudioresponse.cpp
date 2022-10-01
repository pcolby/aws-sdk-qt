// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestudioresponse.h"
#include "deletestudioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::DeleteStudioResponse
 * \brief The DeleteStudioResponse class provides an interace for Nimble DeleteStudio responses.
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
 * \sa NimbleClient::deleteStudio
 */

/*!
 * Constructs a DeleteStudioResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStudioResponse::DeleteStudioResponse(
        const DeleteStudioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new DeleteStudioResponsePrivate(this), parent)
{
    setRequest(new DeleteStudioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStudioRequest * DeleteStudioResponse::request() const
{
    Q_D(const DeleteStudioResponse);
    return static_cast<const DeleteStudioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble DeleteStudio \a response.
 */
void DeleteStudioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStudioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::DeleteStudioResponsePrivate
 * \brief The DeleteStudioResponsePrivate class provides private implementation for DeleteStudioResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a DeleteStudioResponsePrivate object with public implementation \a q.
 */
DeleteStudioResponsePrivate::DeleteStudioResponsePrivate(
    DeleteStudioResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble DeleteStudio response element from \a xml.
 */
void DeleteStudioResponsePrivate::parseDeleteStudioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStudioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
