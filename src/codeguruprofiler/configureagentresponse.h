// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGUREAGENTRESPONSE_H
#define QTAWS_CONFIGUREAGENTRESPONSE_H

#include "codeguruprofilerresponse.h"
#include "configureagentrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class ConfigureAgentResponsePrivate;

class QTAWSCODEGURUPROFILER_EXPORT ConfigureAgentResponse : public CodeGuruProfilerResponse {
    Q_OBJECT

public:
    ConfigureAgentResponse(const ConfigureAgentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConfigureAgentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfigureAgentResponse)
    Q_DISABLE_COPY(ConfigureAgentResponse)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
