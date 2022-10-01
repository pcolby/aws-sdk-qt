// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesystemtemplaterequest.h"
#include "deletesystemtemplaterequest_p.h"
#include "deletesystemtemplateresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::DeleteSystemTemplateRequest
 * \brief The DeleteSystemTemplateRequest class provides an interface for IoTThingsGraph DeleteSystemTemplate requests.
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
 * \sa IoTThingsGraphClient::deleteSystemTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSystemTemplateRequest::DeleteSystemTemplateRequest(const DeleteSystemTemplateRequest &other)
    : IoTThingsGraphRequest(new DeleteSystemTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSystemTemplateRequest object.
 */
DeleteSystemTemplateRequest::DeleteSystemTemplateRequest()
    : IoTThingsGraphRequest(new DeleteSystemTemplateRequestPrivate(IoTThingsGraphRequest::DeleteSystemTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSystemTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSystemTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSystemTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSystemTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::DeleteSystemTemplateRequestPrivate
 * \brief The DeleteSystemTemplateRequestPrivate class provides private implementation for DeleteSystemTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a DeleteSystemTemplateRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
DeleteSystemTemplateRequestPrivate::DeleteSystemTemplateRequestPrivate(
    const IoTThingsGraphRequest::Action action, DeleteSystemTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSystemTemplateRequest
 * class' copy constructor.
 */
DeleteSystemTemplateRequestPrivate::DeleteSystemTemplateRequestPrivate(
    const DeleteSystemTemplateRequestPrivate &other, DeleteSystemTemplateRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
