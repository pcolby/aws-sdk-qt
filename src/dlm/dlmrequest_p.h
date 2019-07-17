/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DLMREQUEST_P_H
#define QTAWS_DLMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "dlmrequest.h"

namespace QtAws {
namespace DLM {

class DlmRequest;

class QTAWS_EXPORT DlmRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DlmRequest::Action action; ///< DLM action to be performed.
    QString apiVersion;        ///< DLM API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DLM request (query string) parameters. @todo?

    DlmRequestPrivate(const DlmRequest::Action action, DlmRequest * const q);
    DlmRequestPrivate(const DlmRequestPrivate &other, DlmRequest * const q);

    static QString toString(const DlmRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DlmRequest)

};

} // namespace DLM
} // namespace QtAws

#endif
