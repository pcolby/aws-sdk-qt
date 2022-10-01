// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTASSOCIATIONSONCERESPONSE_H
#define QTAWS_STARTASSOCIATIONSONCERESPONSE_H

#include "ssmresponse.h"
#include "startassociationsoncerequest.h"

namespace QtAws {
namespace Ssm {

class StartAssociationsOnceResponsePrivate;

class QTAWSSSM_EXPORT StartAssociationsOnceResponse : public SsmResponse {
    Q_OBJECT

public:
    StartAssociationsOnceResponse(const StartAssociationsOnceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartAssociationsOnceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAssociationsOnceResponse)
    Q_DISABLE_COPY(StartAssociationsOnceResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
