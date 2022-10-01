// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDNOTIFICATIONCHANNELSREQUEST_H
#define QTAWS_ADDNOTIFICATIONCHANNELSREQUEST_H

#include "codeguruprofilerrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class AddNotificationChannelsRequestPrivate;

class QTAWSCODEGURUPROFILER_EXPORT AddNotificationChannelsRequest : public CodeGuruProfilerRequest {

public:
    AddNotificationChannelsRequest(const AddNotificationChannelsRequest &other);
    AddNotificationChannelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddNotificationChannelsRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
