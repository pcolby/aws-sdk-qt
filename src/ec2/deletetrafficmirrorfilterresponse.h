// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICMIRRORFILTERRESPONSE_H
#define QTAWS_DELETETRAFFICMIRRORFILTERRESPONSE_H

#include "ec2response.h"
#include "deletetrafficmirrorfilterrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTrafficMirrorFilterResponsePrivate;

class QTAWSEC2_EXPORT DeleteTrafficMirrorFilterResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteTrafficMirrorFilterResponse(const DeleteTrafficMirrorFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTrafficMirrorFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrafficMirrorFilterResponse)
    Q_DISABLE_COPY(DeleteTrafficMirrorFilterResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
