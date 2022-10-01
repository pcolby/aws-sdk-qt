// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFERENCEEXECUTIONSREQUEST_H
#define QTAWS_LISTINFERENCEEXECUTIONSREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListInferenceExecutionsRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT ListInferenceExecutionsRequest : public LookoutEquipmentRequest {

public:
    ListInferenceExecutionsRequest(const ListInferenceExecutionsRequest &other);
    ListInferenceExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInferenceExecutionsRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
