// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORLDTEMPLATEBODYREQUEST_H
#define QTAWS_GETWORLDTEMPLATEBODYREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class GetWorldTemplateBodyRequestPrivate;

class QTAWSROBOMAKER_EXPORT GetWorldTemplateBodyRequest : public RoboMakerRequest {

public:
    GetWorldTemplateBodyRequest(const GetWorldTemplateBodyRequest &other);
    GetWorldTemplateBodyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorldTemplateBodyRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
