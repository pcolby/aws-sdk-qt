// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMLLABELINGSETGENERATIONTASKRUNREQUEST_H
#define QTAWS_STARTMLLABELINGSETGENERATIONTASKRUNREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class StartMLLabelingSetGenerationTaskRunRequestPrivate;

class QTAWSGLUE_EXPORT StartMLLabelingSetGenerationTaskRunRequest : public GlueRequest {

public:
    StartMLLabelingSetGenerationTaskRunRequest(const StartMLLabelingSetGenerationTaskRunRequest &other);
    StartMLLabelingSetGenerationTaskRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMLLabelingSetGenerationTaskRunRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
