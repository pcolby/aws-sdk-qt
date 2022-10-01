// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONREQUEST_H
#define QTAWS_PUTPERMISSIONREQUEST_H

#include "codeguruprofilerrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class PutPermissionRequestPrivate;

class QTAWSCODEGURUPROFILER_EXPORT PutPermissionRequest : public CodeGuruProfilerRequest {

public:
    PutPermissionRequest(const PutPermissionRequest &other);
    PutPermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPermissionRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
