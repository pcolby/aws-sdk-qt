// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBOUTPUTREQUEST_P_H
#define QTAWS_GETJOBOUTPUTREQUEST_P_H

#include "glacierrequest_p.h"
#include "getjoboutputrequest.h"

namespace QtAws {
namespace Glacier {

class GetJobOutputRequest;

class GetJobOutputRequestPrivate : public GlacierRequestPrivate {

public:
    GetJobOutputRequestPrivate(const GlacierRequest::Action action,
                                   GetJobOutputRequest * const q);
    GetJobOutputRequestPrivate(const GetJobOutputRequestPrivate &other,
                                   GetJobOutputRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJobOutputRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
