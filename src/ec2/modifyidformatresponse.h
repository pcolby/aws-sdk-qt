// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIDFORMATRESPONSE_H
#define QTAWS_MODIFYIDFORMATRESPONSE_H

#include "ec2response.h"
#include "modifyidformatrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyIdFormatResponsePrivate;

class QTAWSEC2_EXPORT ModifyIdFormatResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyIdFormatResponse(const ModifyIdFormatRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyIdFormatRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyIdFormatResponse)
    Q_DISABLE_COPY(ModifyIdFormatResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
