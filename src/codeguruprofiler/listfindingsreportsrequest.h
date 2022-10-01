// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGSREPORTSREQUEST_H
#define QTAWS_LISTFINDINGSREPORTSREQUEST_H

#include "codeguruprofilerrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class ListFindingsReportsRequestPrivate;

class QTAWSCODEGURUPROFILER_EXPORT ListFindingsReportsRequest : public CodeGuruProfilerRequest {

public:
    ListFindingsReportsRequest(const ListFindingsReportsRequest &other);
    ListFindingsReportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFindingsReportsRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
