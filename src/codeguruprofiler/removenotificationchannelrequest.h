// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVENOTIFICATIONCHANNELREQUEST_H
#define QTAWS_REMOVENOTIFICATIONCHANNELREQUEST_H

#include "codeguruprofilerrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class RemoveNotificationChannelRequestPrivate;

class QTAWSCODEGURUPROFILER_EXPORT RemoveNotificationChannelRequest : public CodeGuruProfilerRequest {

public:
    RemoveNotificationChannelRequest(const RemoveNotificationChannelRequest &other);
    RemoveNotificationChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveNotificationChannelRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
