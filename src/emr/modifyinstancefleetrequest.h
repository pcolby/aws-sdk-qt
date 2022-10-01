// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEFLEETREQUEST_H
#define QTAWS_MODIFYINSTANCEFLEETREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class ModifyInstanceFleetRequestPrivate;

class QTAWSEMR_EXPORT ModifyInstanceFleetRequest : public EmrRequest {

public:
    ModifyInstanceFleetRequest(const ModifyInstanceFleetRequest &other);
    ModifyInstanceFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceFleetRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
