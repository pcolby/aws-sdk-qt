// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATAPIPELINECLIENT_P_H
#define QTAWS_DATAPIPELINECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace DataPipeline {

class DataPipelineClient;

class DataPipelineClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit DataPipelineClientPrivate(DataPipelineClient * const q);

private:
    Q_DECLARE_PUBLIC(DataPipelineClient)
    Q_DISABLE_COPY(DataPipelineClientPrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
