// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORLDEXPORTJOBREQUEST_H
#define QTAWS_CREATEWORLDEXPORTJOBREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateWorldExportJobRequestPrivate;

class QTAWSROBOMAKER_EXPORT CreateWorldExportJobRequest : public RoboMakerRequest {

public:
    CreateWorldExportJobRequest(const CreateWorldExportJobRequest &other);
    CreateWorldExportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorldExportJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
