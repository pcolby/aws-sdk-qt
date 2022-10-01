// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORLDTEMPLATEREQUEST_H
#define QTAWS_DELETEWORLDTEMPLATEREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class DeleteWorldTemplateRequestPrivate;

class QTAWSROBOMAKER_EXPORT DeleteWorldTemplateRequest : public RoboMakerRequest {

public:
    DeleteWorldTemplateRequest(const DeleteWorldTemplateRequest &other);
    DeleteWorldTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorldTemplateRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
