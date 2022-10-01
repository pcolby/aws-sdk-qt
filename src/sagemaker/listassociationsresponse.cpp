// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassociationsresponse.h"
#include "listassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListAssociationsResponse
 * \brief The ListAssociationsResponse class provides an interace for SageMaker ListAssociations responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listAssociations
 */

/*!
 * Constructs a ListAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssociationsResponse::ListAssociationsResponse(
        const ListAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListAssociationsResponsePrivate(this), parent)
{
    setRequest(new ListAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssociationsRequest * ListAssociationsResponse::request() const
{
    Q_D(const ListAssociationsResponse);
    return static_cast<const ListAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListAssociations \a response.
 */
void ListAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListAssociationsResponsePrivate
 * \brief The ListAssociationsResponsePrivate class provides private implementation for ListAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListAssociationsResponsePrivate object with public implementation \a q.
 */
ListAssociationsResponsePrivate::ListAssociationsResponsePrivate(
    ListAssociationsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListAssociations response element from \a xml.
 */
void ListAssociationsResponsePrivate::parseListAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
