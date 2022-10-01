// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELABELRESPONSE_H
#define QTAWS_CREATELABELRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "createlabelrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class CreateLabelResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT CreateLabelResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    CreateLabelResponse(const CreateLabelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLabelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLabelResponse)
    Q_DISABLE_COPY(CreateLabelResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
