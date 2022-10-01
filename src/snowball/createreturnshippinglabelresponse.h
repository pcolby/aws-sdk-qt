// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERETURNSHIPPINGLABELRESPONSE_H
#define QTAWS_CREATERETURNSHIPPINGLABELRESPONSE_H

#include "snowballresponse.h"
#include "createreturnshippinglabelrequest.h"

namespace QtAws {
namespace Snowball {

class CreateReturnShippingLabelResponsePrivate;

class QTAWSSNOWBALL_EXPORT CreateReturnShippingLabelResponse : public SnowballResponse {
    Q_OBJECT

public:
    CreateReturnShippingLabelResponse(const CreateReturnShippingLabelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReturnShippingLabelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReturnShippingLabelResponse)
    Q_DISABLE_COPY(CreateReturnShippingLabelResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif
