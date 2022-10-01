// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LABELPARAMETERVERSIONRESPONSE_H
#define QTAWS_LABELPARAMETERVERSIONRESPONSE_H

#include "ssmresponse.h"
#include "labelparameterversionrequest.h"

namespace QtAws {
namespace Ssm {

class LabelParameterVersionResponsePrivate;

class QTAWSSSM_EXPORT LabelParameterVersionResponse : public SsmResponse {
    Q_OBJECT

public:
    LabelParameterVersionResponse(const LabelParameterVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const LabelParameterVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LabelParameterVersionResponse)
    Q_DISABLE_COPY(LabelParameterVersionResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
