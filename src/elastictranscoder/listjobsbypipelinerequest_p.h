/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTJOBSBYPIPELINEREQUEST_P_H
#define QTAWS_LISTJOBSBYPIPELINEREQUEST_P_H

#include "elastictranscoderrequest_p.h"
#include "listjobsbypipelinerequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ListJobsByPipelineRequest;

class QTAWS_EXPORT ListJobsByPipelineRequestPrivate : public ElasticTranscoderRequestPrivate {

public:
    ListJobsByPipelineRequestPrivate(const ElasticTranscoder::Action action,
                                   ListJobsByPipelineRequest * const q);
    ListJobsByPipelineRequestPrivate(const ListJobsByPipelineRequestPrivate &other,
                                   ListJobsByPipelineRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListJobsByPipelineRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
