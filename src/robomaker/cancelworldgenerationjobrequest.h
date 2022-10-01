// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELWORLDGENERATIONJOBREQUEST_H
#define QTAWS_CANCELWORLDGENERATIONJOBREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class CancelWorldGenerationJobRequestPrivate;

class QTAWSROBOMAKER_EXPORT CancelWorldGenerationJobRequest : public RoboMakerRequest {

public:
    CancelWorldGenerationJobRequest(const CancelWorldGenerationJobRequest &other);
    CancelWorldGenerationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelWorldGenerationJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
