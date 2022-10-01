// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststudiolifecycleconfigsresponse.h"
#include "liststudiolifecycleconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListStudioLifecycleConfigsResponse
 * \brief The ListStudioLifecycleConfigsResponse class provides an interace for SageMaker ListStudioLifecycleConfigs responses.
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
 * \sa SageMakerClient::listStudioLifecycleConfigs
 */

/*!
 * Constructs a ListStudioLifecycleConfigsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStudioLifecycleConfigsResponse::ListStudioLifecycleConfigsResponse(
        const ListStudioLifecycleConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListStudioLifecycleConfigsResponsePrivate(this), parent)
{
    setRequest(new ListStudioLifecycleConfigsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStudioLifecycleConfigsRequest * ListStudioLifecycleConfigsResponse::request() const
{
    Q_D(const ListStudioLifecycleConfigsResponse);
    return static_cast<const ListStudioLifecycleConfigsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListStudioLifecycleConfigs \a response.
 */
void ListStudioLifecycleConfigsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStudioLifecycleConfigsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListStudioLifecycleConfigsResponsePrivate
 * \brief The ListStudioLifecycleConfigsResponsePrivate class provides private implementation for ListStudioLifecycleConfigsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListStudioLifecycleConfigsResponsePrivate object with public implementation \a q.
 */
ListStudioLifecycleConfigsResponsePrivate::ListStudioLifecycleConfigsResponsePrivate(
    ListStudioLifecycleConfigsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListStudioLifecycleConfigs response element from \a xml.
 */
void ListStudioLifecycleConfigsResponsePrivate::parseListStudioLifecycleConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStudioLifecycleConfigsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
