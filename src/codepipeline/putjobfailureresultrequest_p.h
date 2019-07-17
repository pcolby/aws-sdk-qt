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

#ifndef QTAWS_PUTJOBFAILURERESULTREQUEST_P_H
#define QTAWS_PUTJOBFAILURERESULTREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "putjobfailureresultrequest.h"

namespace QtAws {
namespace CodePipeline {

class PutJobFailureResultRequest;

class QTAWS_EXPORT PutJobFailureResultRequestPrivate : public CodePipelineRequestPrivate {

public:
    PutJobFailureResultRequestPrivate(const CodePipelineRequest::Action action,
                                   PutJobFailureResultRequest * const q);
    PutJobFailureResultRequestPrivate(const PutJobFailureResultRequestPrivate &other,
                                   PutJobFailureResultRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutJobFailureResultRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
