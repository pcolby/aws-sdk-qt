// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILETIMESREQUEST_H
#define QTAWS_LISTPROFILETIMESREQUEST_H

#include "codeguruprofilerrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class ListProfileTimesRequestPrivate;

class QTAWSCODEGURUPROFILER_EXPORT ListProfileTimesRequest : public CodeGuruProfilerRequest {

public:
    ListProfileTimesRequest(const ListProfileTimesRequest &other);
    ListProfileTimesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProfileTimesRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
