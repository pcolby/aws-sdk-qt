// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELWORLDEXPORTJOBREQUEST_H
#define QTAWS_CANCELWORLDEXPORTJOBREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class CancelWorldExportJobRequestPrivate;

class QTAWSROBOMAKER_EXPORT CancelWorldExportJobRequest : public RoboMakerRequest {

public:
    CancelWorldExportJobRequest(const CancelWorldExportJobRequest &other);
    CancelWorldExportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelWorldExportJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
