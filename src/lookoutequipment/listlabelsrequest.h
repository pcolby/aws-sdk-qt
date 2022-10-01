// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLABELSREQUEST_H
#define QTAWS_LISTLABELSREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListLabelsRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT ListLabelsRequest : public LookoutEquipmentRequest {

public:
    ListLabelsRequest(const ListLabelsRequest &other);
    ListLabelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLabelsRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
