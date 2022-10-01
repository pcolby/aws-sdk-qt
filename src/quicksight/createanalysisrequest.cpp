// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createanalysisrequest.h"
#include "createanalysisrequest_p.h"
#include "createanalysisresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateAnalysisRequest
 * \brief The CreateAnalysisRequest class provides an interface for QuickSight CreateAnalysis requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAnalysisRequest::CreateAnalysisRequest(const CreateAnalysisRequest &other)
    : QuickSightRequest(new CreateAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAnalysisRequest object.
 */
CreateAnalysisRequest::CreateAnalysisRequest()
    : QuickSightRequest(new CreateAnalysisRequestPrivate(QuickSightRequest::CreateAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new CreateAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateAnalysisRequestPrivate
 * \brief The CreateAnalysisRequestPrivate class provides private implementation for CreateAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateAnalysisRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateAnalysisRequestPrivate::CreateAnalysisRequestPrivate(
    const QuickSightRequest::Action action, CreateAnalysisRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAnalysisRequest
 * class' copy constructor.
 */
CreateAnalysisRequestPrivate::CreateAnalysisRequestPrivate(
    const CreateAnalysisRequestPrivate &other, CreateAnalysisRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
