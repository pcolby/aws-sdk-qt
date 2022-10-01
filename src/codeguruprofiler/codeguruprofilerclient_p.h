// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEGURUPROFILERCLIENT_P_H
#define QTAWS_CODEGURUPROFILERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CodeGuruProfiler {

class CodeGuruProfilerClient;

class CodeGuruProfilerClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CodeGuruProfilerClientPrivate(CodeGuruProfilerClient * const q);

private:
    Q_DECLARE_PUBLIC(CodeGuruProfilerClient)
    Q_DISABLE_COPY(CodeGuruProfilerClientPrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
