// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDINSTANCEFLEETREQUEST_H
#define QTAWS_ADDINSTANCEFLEETREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class AddInstanceFleetRequestPrivate;

class QTAWSEMR_EXPORT AddInstanceFleetRequest : public EmrRequest {

public:
    AddInstanceFleetRequest(const AddInstanceFleetRequest &other);
    AddInstanceFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddInstanceFleetRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
