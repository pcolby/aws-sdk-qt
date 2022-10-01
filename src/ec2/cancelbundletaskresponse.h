// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELBUNDLETASKRESPONSE_H
#define QTAWS_CANCELBUNDLETASKRESPONSE_H

#include "ec2response.h"
#include "cancelbundletaskrequest.h"

namespace QtAws {
namespace Ec2 {

class CancelBundleTaskResponsePrivate;

class QTAWSEC2_EXPORT CancelBundleTaskResponse : public Ec2Response {
    Q_OBJECT

public:
    CancelBundleTaskResponse(const CancelBundleTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelBundleTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelBundleTaskResponse)
    Q_DISABLE_COPY(CancelBundleTaskResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
