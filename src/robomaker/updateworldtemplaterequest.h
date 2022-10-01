// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORLDTEMPLATEREQUEST_H
#define QTAWS_UPDATEWORLDTEMPLATEREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class UpdateWorldTemplateRequestPrivate;

class QTAWSROBOMAKER_EXPORT UpdateWorldTemplateRequest : public RoboMakerRequest {

public:
    UpdateWorldTemplateRequest(const UpdateWorldTemplateRequest &other);
    UpdateWorldTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorldTemplateRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
