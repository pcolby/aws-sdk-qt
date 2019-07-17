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

#ifndef QTAWS_TRANSCRIBESTREAMINGSERVICEREQUEST_P_H
#define QTAWS_TRANSCRIBESTREAMINGSERVICEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "transcribestreamingservicerequest.h"

namespace QtAws {
namespace TranscribeStreamingService {

class TranscribeStreamingServiceRequest;

class QTAWS_EXPORT TranscribeStreamingServiceRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    TranscribeStreamingServiceRequest::Action action; ///< TranscribeStreamingService action to be performed.
    QString apiVersion;        ///< TranscribeStreamingService API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< TranscribeStreamingService request (query string) parameters. @todo?

    TranscribeStreamingServiceRequestPrivate(const TranscribeStreamingServiceRequest::Action action, TranscribeStreamingServiceRequest * const q);
    TranscribeStreamingServiceRequestPrivate(const TranscribeStreamingServiceRequestPrivate &other, TranscribeStreamingServiceRequest * const q);

    static QString toString(const TranscribeStreamingServiceRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(TranscribeStreamingServiceRequest)

};

} // namespace TranscribeStreamingService
} // namespace QtAws

#endif
