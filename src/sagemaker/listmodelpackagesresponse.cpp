// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmodelpackagesresponse.h"
#include "listmodelpackagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelPackagesResponse
 * \brief The ListModelPackagesResponse class provides an interace for SageMaker ListModelPackages responses.
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
 * \sa SageMakerClient::listModelPackages
 */

/*!
 * Constructs a ListModelPackagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListModelPackagesResponse::ListModelPackagesResponse(
        const ListModelPackagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListModelPackagesResponsePrivate(this), parent)
{
    setRequest(new ListModelPackagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListModelPackagesRequest * ListModelPackagesResponse::request() const
{
    Q_D(const ListModelPackagesResponse);
    return static_cast<const ListModelPackagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListModelPackages \a response.
 */
void ListModelPackagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListModelPackagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListModelPackagesResponsePrivate
 * \brief The ListModelPackagesResponsePrivate class provides private implementation for ListModelPackagesResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelPackagesResponsePrivate object with public implementation \a q.
 */
ListModelPackagesResponsePrivate::ListModelPackagesResponsePrivate(
    ListModelPackagesResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListModelPackages response element from \a xml.
 */
void ListModelPackagesResponsePrivate::parseListModelPackagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListModelPackagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
