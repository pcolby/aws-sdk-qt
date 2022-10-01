// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesolutionresponse.h"
#include "deletesolutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteSolutionResponse
 * \brief The DeleteSolutionResponse class provides an interace for Personalize DeleteSolution responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteSolution
 */

/*!
 * Constructs a DeleteSolutionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSolutionResponse::DeleteSolutionResponse(
        const DeleteSolutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DeleteSolutionResponsePrivate(this), parent)
{
    setRequest(new DeleteSolutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSolutionRequest * DeleteSolutionResponse::request() const
{
    Q_D(const DeleteSolutionResponse);
    return static_cast<const DeleteSolutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DeleteSolution \a response.
 */
void DeleteSolutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSolutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DeleteSolutionResponsePrivate
 * \brief The DeleteSolutionResponsePrivate class provides private implementation for DeleteSolutionResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteSolutionResponsePrivate object with public implementation \a q.
 */
DeleteSolutionResponsePrivate::DeleteSolutionResponsePrivate(
    DeleteSolutionResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DeleteSolution response element from \a xml.
 */
void DeleteSolutionResponsePrivate::parseDeleteSolutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSolutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
