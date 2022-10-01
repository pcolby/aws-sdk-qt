// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTEPSRESPONSE_H
#define QTAWS_LISTSTEPSRESPONSE_H

#include "emrresponse.h"
#include "liststepsrequest.h"

namespace QtAws {
namespace Emr {

class ListStepsResponsePrivate;

class QTAWSEMR_EXPORT ListStepsResponse : public EmrResponse {
    Q_OBJECT

public:
    ListStepsResponse(const ListStepsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStepsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStepsResponse)
    Q_DISABLE_COPY(ListStepsResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
