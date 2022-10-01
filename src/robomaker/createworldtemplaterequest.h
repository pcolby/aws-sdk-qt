// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORLDTEMPLATEREQUEST_H
#define QTAWS_CREATEWORLDTEMPLATEREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateWorldTemplateRequestPrivate;

class QTAWSROBOMAKER_EXPORT CreateWorldTemplateRequest : public RoboMakerRequest {

public:
    CreateWorldTemplateRequest(const CreateWorldTemplateRequest &other);
    CreateWorldTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorldTemplateRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
