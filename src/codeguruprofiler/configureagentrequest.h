// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGUREAGENTREQUEST_H
#define QTAWS_CONFIGUREAGENTREQUEST_H

#include "codeguruprofilerrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class ConfigureAgentRequestPrivate;

class QTAWSCODEGURUPROFILER_EXPORT ConfigureAgentRequest : public CodeGuruProfilerRequest {

public:
    ConfigureAgentRequest(const ConfigureAgentRequest &other);
    ConfigureAgentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfigureAgentRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
