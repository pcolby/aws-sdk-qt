// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesystemtemplaterequest.h"
#include "updatesystemtemplaterequest_p.h"
#include "updatesystemtemplateresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::UpdateSystemTemplateRequest
 * \brief The UpdateSystemTemplateRequest class provides an interface for IoTThingsGraph UpdateSystemTemplate requests.
 *
 * \inmodule QtAwsIoTThingsGraph
 *
 *  <fullname>AWS IoT Things Graph</fullname>
 * 
 *  AWS IoT Things Graph provides an integrated set of tools that enable developers to connect devices and services that use
 *  different standards, such as units of measure and communication protocols. AWS IoT Things Graph makes it possible to
 *  build IoT applications with little to no code by connecting devices and services and defining how they interact at an
 *  abstract
 * 
 *  level>
 * 
 *  For more information about how AWS IoT Things Graph works, see the <a
 *  href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-whatis.html">User
 * 
 *  Guide</a>>
 * 
 *  The AWS IoT Things Graph service is
 *
 * \sa IoTThingsGraphClient::updateSystemTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSystemTemplateRequest::UpdateSystemTemplateRequest(const UpdateSystemTemplateRequest &other)
    : IoTThingsGraphRequest(new UpdateSystemTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSystemTemplateRequest object.
 */
UpdateSystemTemplateRequest::UpdateSystemTemplateRequest()
    : IoTThingsGraphRequest(new UpdateSystemTemplateRequestPrivate(IoTThingsGraphRequest::UpdateSystemTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSystemTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSystemTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSystemTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSystemTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::UpdateSystemTemplateRequestPrivate
 * \brief The UpdateSystemTemplateRequestPrivate class provides private implementation for UpdateSystemTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a UpdateSystemTemplateRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
UpdateSystemTemplateRequestPrivate::UpdateSystemTemplateRequestPrivate(
    const IoTThingsGraphRequest::Action action, UpdateSystemTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSystemTemplateRequest
 * class' copy constructor.
 */
UpdateSystemTemplateRequestPrivate::UpdateSystemTemplateRequestPrivate(
    const UpdateSystemTemplateRequestPrivate &other, UpdateSystemTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
